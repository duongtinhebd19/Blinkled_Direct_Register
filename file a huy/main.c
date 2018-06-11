int main(void)
{
      

  
  
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
  /* Nen code sau khi clock he thong dc khoi tao */ 
      GPIOA -> MODER |= (( 1 <<26) | (1 << 28) | (1 << 30));              // General purpose output mode Pin PA13, PA14, PA15
      GPIOA -> OTYPER &= ~(( 1 << 13) | (1 << 14) | (1 << 15));           // Output Push Pull
      GPIOA -> OSPEEDR |= (( 1 <<26) | (1 << 28) | (1 << 30));            // OUTPUT HIGHSPEED
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  //MX_GPIO_Init(); // ham nay la ham khoi tao IO, bo di code bang thanh ghi
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

          GPIOA -> BSRR |= (( 1 << 13) | ( 1 << 14) | (1 << 15));
          HAL_Delay(1000);
          GPIOA -> BSRR &= ~(( 1 << 13) | ( 1 << 14) | (1 << 15));
          GPIOA -> BSRR |= (( 1 << 29) | ( 1 << 30) | (1 << 31));
          HAL_Delay(1000);
  }
  /* USER CODE END 3 */

}int main(void)
{
      

  
  
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */
  /* Nen code sau khi clock he thong dc khoi tao */ 
      GPIOA -> MODER |= (( 1 <<26) | (1 << 28) | (1 << 30));              // General purpose output mode Pin PA13, PA14, PA15
      GPIOA -> OTYPER &= ~(( 1 << 13) | (1 << 14) | (1 << 15));           // Output Push Pull
      GPIOA -> OSPEEDR |= (( 1 <<26) | (1 << 28) | (1 << 30));            // OUTPUT HIGHSPEED
  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  //MX_GPIO_Init(); // ham nay la ham khoi tao IO, bo di code bang thanh ghi
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {

          GPIOA -> BSRR |= (( 1 << 13) | ( 1 << 14) | (1 << 15));
          HAL_Delay(1000);
          GPIOA -> BSRR &= ~(( 1 << 13) | ( 1 << 14) | (1 << 15));
          GPIOA -> BSRR |= (( 1 << 29) | ( 1 << 30) | (1 << 31));
          HAL_Delay(1000);
  }
  /* USER CODE END 3 */

}