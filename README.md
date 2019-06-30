# Interactive-Counter
Course Project for SoftUni

<h2>Description</h2>
Microprocessor counter which can loop form 0 to 9 and reverse with a given step.
The output of the counting is displayed on a 7-semgent display as shown on the picture.

![simulation_circuit](https://github.com/IvoKara/Interactive-Counter/blob/master/Images/Interactive-Counter-sim.png)

<h3>Input</h3>
Input from the user is taken from the three buttons on the first breadboard. Each one of them has a specific cause, respectively:

![buttons](https://github.com/IvoKara/Interactive-Counter/blob/master/Images/push-buttons.png)

<ul>
  <li>
    <strong>Step:</strong> Assingns the <i>step</i> of the counting. 
    Its value will increase or decrease by one depending on the <i>"way"</i>.
    Ex: step=1 [1,2,3..] or [1,0,9..]; step=2 [2,4,6..] or [9,7,5..]; step=0 [1,1,1...].
  </li>
  
  <li>
    <strong>Way:</strong> Whether the counting is upwards[1,2,3..] or downwards[3,2,1..](By default is upwards). 
    Transition between states is accomplished with just one click on the "Way" button. 
    It is also responsible for the way the <i>step</i> variable changes. Ex: If step=2 and the way is upwards, by clicking the "Step" button, step is increased by one i.e. step=3. If clicking the "Way" button and then clicking the "Step" button, step is decreased by one i.e. step=2.
  </li>
  
  <li>
    <strong>Count:</strong> It is said by it's name - used for counting work.
  </li> 
</ul>

<h3>Output</h3>
The output from all these assingments is shown on one 7-semgent display.

![display](https://github.com/IvoKara/Interactive-Counter/blob/master/Images/7-segment-display.png)

<h2>Documentation</h2>
<a href="https://docs.google.com/document/d/1Xd61YoWmc-IO0wkxd9mXbEUEnZ0egaCDtpiLZrPKBwY/edit?usp=sharing">Link to Documentation</a>
  
<h2>Presentation</h2>
<a href="https://docs.google.com/presentation/d/191El5Iqz2qBWHmz-MoNmxTex7X6sw9fov2Dep8t07Gc/edit?usp=sharing">Link to Presentation</a>
