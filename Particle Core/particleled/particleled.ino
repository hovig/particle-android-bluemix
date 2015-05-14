int updateLED(String command);
void setup() {
    Serial1.begin(9600);
    pinMode(D0, OUTPUT);
    digitalWrite(D0, LOW);
    // register the Spark functions
    Particle.function("updateLED", updateLED);
}
void loop() {
    
}
int updateLED(String command){
    String s = command.substring(0);
    int i = s.toInt();

    if (i == 1) {
        digitalWrite(D0,HIGH);
        return 1;
        }
    
    if (i == 0) {
        digitalWrite(D0,LOW);
        return 2;
        }
        
    return 0;
   
} 
    
