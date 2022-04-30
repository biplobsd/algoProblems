import os
from bs4 import BeautifulSoup
from pathlib import Path
from markdown import markdown


def scanReadme():
    readmeFiles = [[
        path.parent, f'## {path.parent}'] for path in list(Path('.').rglob('README.md'))[1:]]
    return readmeFiles


def readfile(path):
    with open(path, encoding='utf8') as r:
        html = markdown(r.read())
        return ''.join(BeautifulSoup(html).findAll(text=True))


def writeFile():
    strings = '# Algorithms CSE215 Lab Problems<br>\n'
    for readme in scanReadme():
        filePath = str(readme[0]).replace("\\", "/")
        strings += readme[1]+'<br>\n' + readfile(
            os.path.join(readme[0], 'README.md'))[:100].replace('\n', ' - ') + '...'+f'\n[View problem]({filePath})<br><br>\n\n'
    with open('README.md', 'w') as w:
        w.write(strings)


writeFile()
