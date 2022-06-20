RED='\033[0;31m'
GREEN='\033[0;32m'
CYAN='\033[0;36m'
NC='\033[0m'
YELLOW='\033[01;33m'

function usage() {
    echo ""
    echo "-----------------------------------------------------"
    echo -e "usage: ./runcpp.sh ${CYAN}[FILENAME]${NC} ${GREEN}[CPP-VERSION]${NC}"
}

if [ "$#" -ge "1" ]; then
    FILENAME=$1;
else
    echo "No argument supplied!";
    usage
    exit $ERRCODE;
fi

STD="c++17"
if [ "$#" == "2" ]; then
    STD=$2;
fi

echo -e "${YELLOW}";
echo "$FILENAME -std=$STD compiling...";
echo -e "${NC}";

#echo Flags: -Wpedantic -Wall -Weffc++ -Wextra -Werror
#g++ -o main $FILENAME -std=$STD -Wpedantic -Wall -Weffc++ -Wextra && ./main && rm main;
g++ -o main $FILENAME -std=$STD && ./main && rm main;

