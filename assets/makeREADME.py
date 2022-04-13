import os
from bs4 import BeautifulSoup
from markdown import markdown


def scanReadme():
    readmeFiles = []
    for week in os.listdir():
        if 'w' == week[0]:
            for problem in os.listdir(week):
                if 'prob' == problem[:4]:
                    for readme in os.listdir(os.path.join(week, problem)):
                        if 'README.md' == readme:
                            readmeFiles.append([
                                os.path.join(week, problem), f'## {week} {problem}'])
    return readmeFiles


def readfile(path):
    with open(path) as r:
        html = markdown(r.read())
        return ''.join(BeautifulSoup(html).findAll(text=True))


def writeFile():
    strings = '# Algorithms CSE215 Lab Problems<br>\n'
    for readme in scanReadme():
        filePath = readme[0].replace("\\", "/")
        strings += readme[1]+'<br>\n' + readfile(
            os.path.join(readme[0], 'README.md'))[:100].replace('\n', ' - ') + '...'+f'\n[View problem]({filePath})<br><br>\n\n'
    with open('README.md', 'w') as w:
        w.write(strings)


writeFile()
