# cpp-algorithm-design

## Implementations

- Linked List

## Linked List

### Basic

Implemented Functions:

- Print
- Get
- Append
- Delete

## Run CPP as a Script.

- **Step 1:** Create ~/.shortcuts.sh file
```sh 
$ touch ~/.shortcuts.sh
```

- **Step 2:** Open file to copy belows

```
$ vim ~/.shortcuts.sh
```

Copy belows into the `.shortcuts.sh` file.

```sh
# FILE: .shortcuts.sh
runcpp()
{
    if [ "$#" -ge "1" ]; then
        FILENAME=$1;
        if [ "$#" == "2" ]; then
            STD=$2;
        else
            STD="c++17"
        fi
    else
        echo "Yetersiz parametre!";
        return 1;
    fi

    echo -e "\033[01;33m";
    echo "\"$FILENAME\" -std=$STD compiling...";
    echo -e "\033[00m";
    #echo Flags: -Wpedantic -Wall -Weffc++ -Wextra -Werror
    #g++ -o main $FILENAME -std=$STD -Wpedantic -Wall -Weffc++ -Wextra && ./main && rm main;
    g++ -o main $FILENAME -std=$STD && ./main && rm main;
}
```

- **Step 3:** Import `.shortcuts.sh` scripts from `.bashrc`

```sh
$ echo -e "if [ -f ~/.shortcuts.sh ]; then\n  . ~/.shortcuts.sh\nfi" >> ~/.bashrc
```

**Usage:**
```sh
# default CPP standart is C++17
$ runcpp main.cpp

# can specify other versions
$ runcpp main.cpp c++14
```
