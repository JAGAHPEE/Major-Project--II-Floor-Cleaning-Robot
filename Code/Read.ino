void Run_robot()
{
  if(Serial.available()>0)
  {
    String a = Serial.readString();
    Serial.println("Data Received");
    Serial.println(a);
    switch (a[0]) {
    case 'f':
      Serial.println("Forward");
      Forward();
      break;
    case 'r':
      Serial.println("Right");
      Right();
      break;
    case 'l':
      Serial.println("Left");
      Left();
      break;
    case 'b':
      Serial.println("Backward");
      Backward();
      break;
    case 's':
      Serial.println("Stop");
      Stop();
      break;
    case '7':
      Serial.println("Wash_On");
      Wash_On();
      break;
    case '6':
      Serial.println("Wash_Off");
      Wash_Off();
      break;
    case '3':
      Serial.println("Clean_On");
      Clean_On();
      break;
    case '2':
      Serial.println("Clean_Off");
      Clean_Off();
      break;
    case '5':
      Serial.println("Water_On");
      Water_On();
    case '4':
      Serial.println("Water_Off");
      Water_Off();
      break;
    case '1':
      Serial.println("AB_On");
      AB_On();
      break;
    case '0':
      Serial.println("AB_Off");
      AB_Off();
      break;
    default:
      break;
    }
  }
}