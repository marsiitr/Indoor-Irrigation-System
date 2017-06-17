# Indoor-Irrigation-System

# Abstract
Our motivation to build this bot is to preserve our green earth and save water by changing the conventional way of plantation.  

# Team Members
<ul>
<li ><a href="https://www.facebook.com/people/Nitin-Yadav/100002014363690">Nitin Yadav</a></li>
<li><a href="https://www.facebook.com/utkarshdeepak23">Utkarsh Deepak</a></li>
<li><a href="https://www.facebook.com/tathagat.chaurasiya">Tathagat Chaurasiya</a></li>
<li><a href="https://www.facebook.com/profile.php?id=100004414771823">Ashish Kumar</a></li>
<li><a href="">Abhishek Mishra</a></li>
<li><a href="https://www.facebook.com/profile.php?id=100011648292342">Rahul Yadav</a></li>
</ul>

# Mentors
<ul>
<li><a href="https://www.facebook.com/profile.php?id=100003364416121">Mohit Gupta</a></li>
<li><a href="https://www.facebook.com/prasants021">Prashant Shekhar Singh</a></li>
<li><a href="https://www.facebook.com/clickonshivam">Shivam Parashar</a></li>
<li><a href="https://www.facebook.com/pritam6505">Pritam Kumar</a></li>
<li><a href="https://www.facebook.com/pankajmindfreak">Pankaj Kumar Singh</a></li>
</ul>

# Pre-Requisites
 
 <b>Hardware:</b>
<ol>
<li>Arduino UNO</li>
<li>2	Motor Driver L298N</li>
<li>12V Solenoidal Value</li>
<li>1 Servo motor MG995</li>
<li>3 High Torque Stepper Motors</li>
<li>ULN2003</li>
<li>12V DC Power Adapter</li>
<li>Relimates</li>
<li>Jumper Wires</li>
<li>LM317T Voltage Divider</li>
<li>Resistors</li>
<li>Breadboard</li>
<li>DST</li>
<li>15cm and 50cm Slider</li>
<li>Wooden Base (dia.52cm)</li>
<li>Wooden Circular Rim(inner dia. 980mm and outer dia. 1080mm)</li>
<li>5m Square Channel</li>
<li>L Channels</li>
<li>Rack And Pinion</li>
<li>Aluminium Plate</li>
<li>Aluminium Sheet</li>
<li>Hollow Circular Rod</li>
<li>Motor Mount</li>
<li>Some 3d printed Parts</li> 
</ol>

 <b>Software:</b>
 
•	<a href ="https://www.arduino.cc/en/main/software">Arduino IDE</a>

# D.I.Y. Steps From Scratch
<ol>
<li><p>A wooden base of 104cm diameter is chosen as the base for the whole model. A cavity (diameter) is made so that a rod can be placed to support the moving arm.</p><div><img src="https://github.com/marsiitr/Indoor-Irrigation-System/blob/master/Images/solidworks%20images/1.jpg?raw=true"></div></li>
<li><p>6 square channels of length 50cm are mounted vertically on the wooden base with the help of L-channel to give them a rigid grip on the base. Every square channel has 3 L-channel attached to it on the base and 2 on its top so that the circular rim is fixed firmly and does not move when the arm rotates on it. This is important for a precise movement.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/2.jpg?raw=true"></div></li>
<li><p>To give support to the moving arm, a rod of 51.4 cm is fixed on the base with a diameter of 3.17cm.</p><div><img src="https://github.com/marsiitr/Indoor-Irrigation-System/blob/master/Images/solidworks%20images/3.jpg?raw=true"></div></li>
<li><p>A ball bearing of the same inner diameter as that of the rod is fixed on the rod so that the arm can rotate.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/4.jpg"></div></li>
<li><p>An aluminum plate of about 1cm thickness is used to make a rectangular plate of about 11cm*30 cm, on which, whole of the arm is to be mounted. This aluminum plate has a circular cavity in which the bearing is fitted.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/5.jpg"></div></li>
<li><p>The arm has two square channels of 96cm on which a cardboard sheet is mounted to have a platform for rest of the mechanism.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/6.jpg"></div></li>
<li><p>The rim is placed on the vertical square channels and fixed by screwing it to the 2 L-channels.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/7.jpg"></div></li>
<li><p>A stepper motor (with a wheel) is fixed at one end of the arm to provide the circular motion to the arm. The motor is mounted on the cardboard sheet with a motor mount.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/8.jpg"></div></li>
<li><p>A linear slider of 50cm is screwed on the cardboard sheet for the linear movement of the seeding mechanism. At the end of slider, 2 L-channel are fixed with castor wheels attached at their bottom to provide a smooth movement to the slider despite of the weight of vertical mechanism.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/9.jpg"></div></li>
<li><p>A rack of 40cm is attached on the slider to move it through a stepper motor.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/10.jpg"></div></li>
<li><p>To support the vertical mechanism, a wooden sheet of 15cm*15 cm is used and is fixed on the 2 L-channels with the help of screws.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/11.jpg"></div></li>
<li><p>In the vertical mechanism, a slider of 15cm is fixed on the wooden sheet and a rack of 25cm is wooden sheet through a u-shaped motor mount (made of ABS/PPS, for 3D printing you can directly access the solid works file provided)</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/12.1.jpg"><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/12.2.jpg"></div> </li>
<li><p>For seeding, a conical flask with a cylindrical top, the seed storage, (made of ABS/PPS) is used in which a servo motor is fixed. The servo motor is used to have a periodic opening and closing of a hole in the storage.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/13.jpg"></div></li>
<li><p>The motor for movement of slider on the horizontal arm is mounted through a motor mount (made of ABS/PPS).</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/14.jpg"></div></li>
<li><p>At the vacant side of the arm, whole of the electronic system is mounted. To power the model, the adapter wire is passed through the middle rod. </p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/15.jpg"></div></li>
<li>On the aluminum plate in the middle, opposite to the stepper motor, a solenoidal valve is fixed to control the flow of the water.</li>
<li><p>Boundary of metal sheet is made to support soil.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/17.1.jpg"></div></li>
<li>The water is provided through a container at a certain height higher than the arm to the solenoidal valve.</li>
<li><p>After the whole model is made, the whole weight is about 23-25 kg.</p><div><img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/solidworks%20images/19.1.jpg"></div></li>
</ol>

# Instruction on using source code
 Our overall code consists of three sub files. One of them is the <a href="https://github.com/marsiitr/Indoor-Irrigation-System/blob/master/main_code/main_code.ino">main file</a> and others consists of only functions or methods definitons which are called/used in the main file.All the subfiles have been uploaded in github. First, you have to download them all and put them in a folder that has the same name as that of the main file( In our case, "main_code" is the main file).Once you have done this and connected the hardware properly, then you just have to upload the main file to the arduino board and you are ready to go.
# Photos
<div>
<img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/Project%20Images/ori1.jpg"><br/>
<img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/Project%20Images/ori2.jpg"><br/>
<img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/Project%20Images/ori3.jpg"><br/>
<img src="https://raw.githubusercontent.com/marsiitr/Indoor-Irrigation-System/master/Images/Project%20Images/ori4.jpg">
</div>

# Results  
1. The mechanism used in the Bot is very effective in saving water and using it efficiently both position and time-wise.
2. The seed bowing mechanism gives us a platform to use the space on the used patch of land efficiently. It can used to accurately place the seed in the position we want to and that is needed to.
3. The energy requirements of the Bot is very low and can be used for long-time with low electricity requirements.
4. The bot has very low heat radiation and thus can be used with continuous working for long time-span.
5. It helps us to grow the plant with proper use of water which results in proper growth of the plant.

# Future scope
 1. This bot has a very good scope in future for people who are not able to give time in gardening but want a patch of land full of   flowers in their backyard. They would require just to spend a few minutes in giving the seeds and water supply to the bot and       rest of the work is automatically done by the bot.
2. For research purposes this bot can be used by researchers to examine the soil quality and its requirements for plantation accurately and without spending much time as most of the work is done by the bot.
3. By farmers to have a proper information about the water and pesticide requirements of soil of their farm so that the growth of grains, vegetables etc. is done with precise information and their growth is properly examined and good quality crops are grown on a larger scale without wastage of water and other resources.

