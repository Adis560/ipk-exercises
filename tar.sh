!/bin/bash

find . \( ! -path . ! -name .git ! -name Aufgaben ! -name Skript \) -type d -maxdepth 1 -exec tar czvf {}/{}.tar.gz {} \;
#find . -regex 'E\.*.tar.gz'
