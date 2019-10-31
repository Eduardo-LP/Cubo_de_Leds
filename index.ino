int D = 8;
int CLK = 9;
int E = 10;

void setup()
{
  pinMode(D, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(E, OUTPUT);
}

void funcaoPadrao(int P, int Q ){
  digitalWrite(E, LOW);
  shiftOut(D, CLK, MSBFIRST, P);
  shiftOut(D, CLK, MSBFIRST, Q);
  digitalWrite(E, HIGH);
  delay(500);
  }

void efeito1(){
  funcaoPadrao(0xFF, 0xB0);
  funcaoPadrao(0xFF, 0xE0);
  }

void efeito2(){
  funcaoPadrao(0xE0, 0x70);
  funcaoPadrao(0x1C, 0x70);
  
  funcaoPadrao(0x03, 0xF0);
  funcaoPadrao(0x1C, 0x70);
  }

  void efeito3(){
        //----------------------------vai pra primeira fila----------------------------------------------------
  funcaoPadrao(0x00, 0x90);
  funcaoPadrao(0x01, 0x10);
  funcaoPadrao(0x02, 0x10);

  funcaoPadrao(0x10, 0x10);
  funcaoPadrao(0x80, 0x10);
  funcaoPadrao(0x40, 0x10);

  funcaoPadrao(0x20, 0x10);
  funcaoPadrao(0x04, 0x10);
  //-----------------------------vai pra segunda fila---------------------------------------------------
  funcaoPadrao(0x00, 0xA0);
  funcaoPadrao(0x01, 0x20);
  funcaoPadrao(0x02, 0x20);
  
  funcaoPadrao(0x10, 0x20);
  funcaoPadrao(0x80, 0x20);
  funcaoPadrao(0x40, 0x20);

  funcaoPadrao(0x20, 0x20);
  funcaoPadrao(0x04, 0x20);
  //--------------------------vai pra terceira fila----------------------------------------------------------
  funcaoPadrao(0x00, 0xC0);
  funcaoPadrao(0x01, 0x40);
  funcaoPadrao(0x02, 0x40);
  
  funcaoPadrao(0x10, 0x40);
  funcaoPadrao(0x80, 0x40);
  funcaoPadrao(0x40, 0x40);

  funcaoPadrao(0x20, 0x40);
  funcaoPadrao(0x04, 0x40);
//-------------------volta pelo meio---------------------------------------------------------------------
  funcaoPadrao(0x08, 0x40);
  funcaoPadrao(0x08, 0x20);
  funcaoPadrao(0x08, 0x10);
    }


void loop()
{
  for(int i = 0; i <= 20; i++){
      efeito1();
    }
  for(int i = 0; i <= 10; i++){
      efeito2();
    }
  for(int i = 0; i <= 10; i++){
      efeito3();
    }

}
