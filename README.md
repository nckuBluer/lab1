# lab1
用class Collatz宣告主要執行的程式(public)

cout出要使用者輸入數字的字串
cin 數字到變數number

先用while迴圈檢查cin進來的number是否為正整數，若為非，cout出error message並重複迴圈

(使用遞迴來產生題目要的Collatz數列)
if cin進來的number=1時，直接return 0並cout出end the program

else 分做兩種情況
  if even(%2=0)，將number/2 並回傳number
  else  (odd)，將number*3 + 1 並回傳number
  
執行結束，return 0 到main function
  
