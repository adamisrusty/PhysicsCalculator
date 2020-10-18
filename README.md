# Requirements

Create a menu whereby the following options are present:


### [Velocity](https://physics.info/velocity/)

v̅ = Δs/Δt

v = ds/dt


- given input of ds and dt calculate the velocity
- “Ask the user for the unit of measure for ds and dt. “append those values to the answer” i.e. “km/hour”
- Dr_T Hints - Eat the Elephant one bite at a time:
  
(not completing functioning code, but close) 
  
  Input:
  
  double ds; 
  
  string dsUnits;
  
  double dt;
  
  string dsUnits; 
  
  Process:
  
  double v  = ds / dt;
  
  Output:
  
  cout << v << dsUnits << "/" << dtUnits << endl; 
  
  Theme: Translating the input to the presentation of information to the user.  


### [Acceleration](https://physics.info/acceleration/)



a̅ = Δv / Δt

a = dv / dt


- A = given input of dv and dt calculate the acceleration

- “Ask the user for the unit of measure for dv and dt. “append those values to the answer” i.e. “m/sec”

### [Motion](https://physics.info/motion-equations/)

For the motion formulas, I will be looking for all 4. Ask the user first if he/she would like to calculate motion, then complete a submenu within the menu for the user to choose options 1-4. 

equations of motion

v = v0 + at

s = s0 + v0t + ½at2

v2 = v02 + 2a(s − s0)

v̅ = ½(v + v0)

Ma = solve for v

Ms = solve for s

Mv2 = solve for v^2

Mv = solve for v_bar
 
### [Newton's Second Law](https://physics.info/newton-second/)
∑F = ma

∑F = dp / dt

N = given input of m and a calculate N

“Ask the user for the unit of measure for m and a. “append those values to the answer” i.e. N = kg m/s2

### [Weight (Earth)](https://physics.info/weight/)
W = mg

W = given input of m and g calculate W

“Ask the user for the expected measure output. “append those values to the answer” i.e. lbs, stone

### [Momentum](https://physics.info/momentum/)

p = mv

P = given input of m and v calculate P

“Ask the user for the expected measure output. “append those values to the answer” i.e. [kg m/s]

## Additionally:

Certainly, the use of functions is a much more efficient way to implement this work. Functions will be expected for max points.

Echo to the user each time the values that he/she inputted and the result. Don't just show a result. Show the result in the context of the formula being used.

Show the menu with each loop.

Loop until E or e input.

Test your program with multiple decisions, and multiple values. You might perhaps look for an online Calculator to test the accuracy of your information being presented.
 
Set the precision of the outputted numbers to 4 decimals places; hint iomanip library

Add color to enhance the program. i.e. of the output results.

Add option “clear” that enables Dr_T to clear the screen on-demand #include<stdtlib> system(“cls”);

Can you prevent the user from breaking your program if they enter an alphabetical character instead of a number…? If not, your points will be reduced on this program. 

# Pseudocode
```
main function

while user has not entered 'exit':
- function output formula menu (formula options, or exit program)
- function get formula menu input from user
- function validate menu input
    provide error and prompt user again if input invalid
- function get necessary formula parameter input from user
- validate formula paramters input
    provide error and prompt user again if input invalid
- calculate formula with parameters
    pass parameters to appropriate formula
    return results
- output forumla results to user
- reoutput formula menu (formula options, or exit program)

function for each formula type