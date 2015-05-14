Part 2 - Bluemix with Node-RED and Push:

1-	You need to create an account with Bluemix.net if you don't have one. Bluemix has a free trial account that 
        you can take advantage of it.
    
2-	Go to Catalog and choose Node-RED, name your app and create it. You will need to add a service and it will 
        be the Mobile Application Security first and the Push Notification.
    
3-	Click the link of your new app, then click on "Go to your Node-RED flow editor" button. On the right, choose 
        import from the menu and paste what's inside Bluemix/NodeRed.txt into the box opened. Make sure to change the 
	device id/name and access token with your values from Particle.io.
	
4-	Go to https://console.developers.google.com and create an application. Afterwards, click on Permissions on 
        the left and copy the Project Number and paste it in the Configuration in Bluemix Push. Click Edit for Google 
	Cloud Messaging and paste it inside the Sender Id in both places. 
	
	Now, click on Credentials on the left side in Google Console, Create new Key, then click on Server key and 
	click create. Copy API key and paste in Bluemix Push at both places for Sender Auth Token. Hit OK and Push 
	Notification is set.

	*On your app's Overview page, on the right side you can ADD GIT or MOBILE OPTIONS. Click on MOBILE OPTIONS 
	for the credentials needed (app id, app name, app secret) for the Android app setup.


For the testing purposes and after all the setup for this project is done, you can open your app's link and 
add /on or /off to test. For example, YOURAPPNAME.mybluemix.net/on and YOURAPPNAME.mybluemix.net/off. This way, 
everytime a notification will appear on the phone screen with each case.
