# airplane
My answer to the Amazon Airplane question

Create a method movePlane(String command). THis method should return a String that reflects the plane's new position after the command. Assume the plane starts at the coordinates (0,0).

There will be 5 different valid commands: "U", "D", "L", "R", (up, down, left, right) and "X". The X will represent a delete command.
Each command may have a number of prior to it which represents a magnification of the command. For example, "7U" will move the plane 7 units Up.
If there are no prior commands to delete, the X should delete nothing.
If there is anything invalid about the input, you should return "(999,999)".

Examples:
"UDLL". This should return "(-2,0)" because the plane moved 2 steps left overall.
"8D2L". This should reutnn "(-2,-8)" because the plane moved 2 steps left and eight steps down.
"4D2RX". This should return "(0,-4)" because the X command deleted the "2R" command and thus the plane only moved four steps down.