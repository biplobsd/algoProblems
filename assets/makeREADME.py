import os
from datetime import datetime
from bs4 import BeautifulSoup
from pathlib import Path
from markdown import markdown


def scanReadme():
    readmeFiles = [[
        path.parent, f'### {path.parent}'] for path in list(Path('.').rglob('README.md'))[1:]]
    return readmeFiles


def readfile(path):
    with open(path, encoding='utf8') as r:
        html = markdown(r.read())
        return ''.join(BeautifulSoup(html, features='html.parser').findAll(text=True))

def unSolvedStatus(paths):
    unSolvedString = '## Unsolved problems <br>\n'
    pathslen = len(paths)
    for i, path in enumerate(paths):

        isanyF = False
        for maySo in os.listdir(path[0]):
            if 'solution' in maySo.lower():
                isanyF = True
                break
        if not isanyF:
            filePath = str(path[0]).replace("\\", "/")
            unSolvedString += f'[{filePath}]({filePath}) '
            if i != pathslen-2:
                unSolvedString += '| '
    return unSolvedString


def writeFile():
    strings = '# Algorithms CSE215 Lab Problems<br>\n\n'
    paths = scanReadme()
    strings += unSolvedStatus(paths) + '<br><br>\n\n'
    strings += '## All problems <br>\n\n'
    for readme in paths:
        filePath = str(readme[0]).replace("\\", "/")
        strings += readme[1]+'<br>\n' + readfile(
            os.path.join(readme[0], 'README.md'))[:100].replace('\n', ' - ') + '...'+f'\n[View problem]({filePath})<br><br>\n\n'
    with open('README.md', 'w') as w:
        strings += f'\n\n<br><br>[Contract: biplobsd.github.io](https://biplobsd.github.io) <br>\n {datetime.today().strftime("%Y-%m-%d %H:%M:%S")}'
        w.write(strings)


writeFile()
