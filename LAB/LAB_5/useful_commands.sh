sudo apt-get update
sudo apt-get install python3-dev libffi-dev build-essential virtualenvwrapper

export WORKON_HOME=$HOME/.virtualenvs
export PROJECT_HOME=$HOME/Devel
source /usr/share/virtualenvwrapper/virtualenvwrapper.sh

mkvirtualenv --python=$(which python3) angr && pip install angr

sudo apt install ipython3

git clone https://github.com/angr/angr-doc.git

mkvirtualenv environ
workon environ
#deactivate

