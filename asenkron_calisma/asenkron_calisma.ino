unsigned long SimdikiZaman = 0;
unsigned long OncekiZaman = 0;

int aralik = 1000;
int aralik1 = 500;
int aralik2 = 1500;

void setup()
{

}

void loop()
{
  SimdikiZaman = millis();

  if  (SimdikiZaman - OncekiZaman > aralik)
  {
    OncekiZaman = SimdikiZaman;

    //ilk işlemlerin yapılabileceği kısım
  }
  if  (SimdikiZaman - OncekiZaman > aralik1)
  {
    OncekiZaman = SimdikiZaman;

    //ikinci işlemlerin yapılabileceği kısım

  }

  if  (SimdikiZaman - OncekiZaman > aralik2)
  {
    OncekiZaman = SimdikiZaman;
    //üçüncü işlemlerin yapılabileceği kısım
  }
}
