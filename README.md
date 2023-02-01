# ABSTRACT
POV (Persistence of Vision) display is a type of electronic display technology that uses persistence of vision to display an image or text. It works by rapidly flashing light-emitting diodes (LEDs) in a specific pattern to create an optical illusion of a static image. POV displays are often used in wearable devices and promotional products, such as LED wristbands and promotional toys.
## DESIGN


![WhatsApp Image 2023-01-31 at 11 23 13](https://user-images.githubusercontent.com/49099853/216009249-6d42fa8f-16a8-4d5c-9982-fa68c50c25c3.jpeg)


POV displays work by rapidly flashing light-emitting diodes (LEDs) in a specific pattern, creating an optical illusion of a static image. The LEDs are usually mounted on a spinning disk and the pattern is created by controlling the activation of the LEDs in coordination with the disk's rotation. As the disk rotates, the eye perceives a continuous image due to the persistence of vision
![WhatsApp Image 2023-01-31 at 11 23 08](https://user-images.githubusercontent.com/49099853/215973479-4b8de608-2e92-42a7-aba9-099bb20b39b6.jpeg)

## THE WORKING


When the PCB with the LEDs start rotating, the single line of LED array acts as a square matrix.


![Screenshot_7](https://user-images.githubusercontent.com/49099853/216002410-3a7843be-12fa-43a3-a62a-75a529ce8f3c.png)


Let us see how this works with an example :
Considering alphabet "A"


![Screenshot_1](https://user-images.githubusercontent.com/49099853/216003093-e915f27f-939b-454e-8c2f-35a2656abe82.png)


when the display starts rotating, the LED arrays change their values fast enough, which are not visible to human eyes. Infact it appears as a whole instead of single line values.


at Instance 1 : 


![Screenshot_2](https://user-images.githubusercontent.com/49099853/216003118-68cd38e5-7c5a-4596-8bba-260f9d9dacab.png)


At instance 2 :


![Screenshot_3](https://user-images.githubusercontent.com/49099853/216003157-dbe0b59d-f8ce-4753-9e92-8e54763b5176.png)


at instance 3 :


![Screenshot_4](https://user-images.githubusercontent.com/49099853/216003231-38b68586-866b-4bf0-b46d-3f4f2c91ba34.png)


at instance 4 : 


![Screenshot_5](https://user-images.githubusercontent.com/49099853/216003291-5afb3f22-04e4-4999-a063-ae7a6875c667.png)


at instance 5 :


![Screenshot_6](https://user-images.githubusercontent.com/49099853/216003325-d891aecd-53c2-4ae3-be66-1c0aabc137f8.png)


These sudden changes take place so quickly that the human eye cannot see them. cumulatively, it appears as follows:


![Screenshot_8](https://user-images.githubusercontent.com/49099853/216003793-034d5c4f-a5d1-406a-90c9-45d5fca922f6.png)


## DEMO


https://user-images.githubusercontent.com/49099853/216008913-8b16b1ac-e546-4fe9-a1d3-f18c8e22b0af.mp4


## DEMO ( BUT IN SLOW MOTION, BECAUSE WHY NOT)


https://user-images.githubusercontent.com/49099853/216009138-217c8e96-e23a-4cf1-bcd3-442ee42e0352.mp4


