# cs-50

## CLI commands
- For clearing terminal window either <ctrl + l> or typing the word "clear"
- To check where you are located type <pwd> - print (current) working directory
- To change directories you have two options of either going up the directory tree or moving down the tree. 
  - To move further down the tree type "cd <directory to move into>" 
    this can be chained to move multiple levels by adding a "/" between directory levels(each further level must be inside the parent)
    can be autocompleted via the "TAB" key.
  - To move further up the tree type "cd .."
    this can be chained to move multiple levels up the tree by adding a "/" character between levels you wish to move up. i.e. ../../.. will move you up three levels
  - To move to your home directory directly just type the "cd" command with nothing following it. 
- Command Line Arguments for your main functon. 
  - Instead of the normal "int main(void) {}" function declaration you can use the following: 
    int main(int argc, string argv[])
    argc - argument count 
    argv - argument vector

### Debugging 
- help50 <filename> -- allows you to help check what is wrong in your error messages.
- eprintf (<message>) -- adds line number and file name appended to the message inside - gives you a reference point to look for where things went wrong (used for debugging).

### Constants 
- Constants can be defined and are immutable by doing the following:
  "#define <NAME/PLACEHOLDER> <VALUE_TO_BE_REPLACED_WITH>"

  This is not limited to numbers can be used to replace strings as well. 

### Useful functions: 
atoi(<StringTypeData>) - converts string to an integer. 