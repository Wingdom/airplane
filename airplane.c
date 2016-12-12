/*
 * Complete the function below.
 */
#include <ctype.h>
char* movePlane(char* command) {
    int x = 0; //x axis
    int y = 0; //y axis
    int len = strlen(command);
    
    //printf("len = %d", len);
    
    if(len == 0){
        return"(999, 999)";
    }
    for (int i = 0; i < len; i++){
        int u = 0;
        int d = 0;
        int l = 0;
        int r = 0;
        if(isdigit(&command[i])){//if the character is a digit, move that direction that many times
            if(&command[i+1] == "U"){
                y=y+command[i];
                u=y;
            }else if(&command[i+1] == "D"){
                y=y-command[i];
                d=y;
            }else if(&command[i+1] == "L"){
                x=x-command[i];
                l=x;
            }else if(&command[i+1] == "R"){
                x=x+command[i];
                r=x;
            }else{//else its a character we dont recognize
                x = 999;
                y = 999;
                break;
            }
            i++; //iterate i so we don't do that move 1 more time
            
            if(i+1 != len){
                if(&command[i+1] == "X"){
                    y = y-u+d;
                    x = x-r+l;
                }
            }
        }
        else if(isalpha(&command[i])){//elseif we're moving 1 space according to this character
            if(&command[i] == "U"){
                y++;
            }else if(&command[i] == "D"){
                y--;
            }else if(&command[i] == "L"){
                x--;
            }else if(&command[i] == "R"){
                x++;
            }else{//else its a character we dont recognize
                x = 999;
                y = 999;
                break;
            }
            
            if(i+1 != len){
                if(&command[i+1] == "X"){
                    y = y-u+d;
                    x = x-r+l;
                }
            }
        }
        else{//if its not a number or character, we can't use it
            x = 999;
            y = 999;
            break;
        }
    }
   
    char answer[11];
    printf("(%d, %d)", x, y);
    
    sprintf(answer, "(%d, %d)", x, y);
    return answer;
}
