import System.IO(isEOF)

vence :: String -> String -> Bool
vence x y = x == "pedra" && y == "tesoura" || x == "tesoura" && y == "papel" || x == "papel" && y == "pedra"

getEntrada = do
  line <- getLine
  let w = words line
  return w

main = do
  stop <- isEOF
  if not stop then do
    entrada <- getEntrada
    let d = entrada!!0
    let l = entrada!!1
    let p = entrada!!2

    if vence d l && vence d p then do
      putStrLn("Os atributos dos monstros vao ser inteligencia, sabedoria...")
    else if vence l d && vence l p then do
      putStrLn("Iron Maiden's gonna get you, no matter how far!")
    else if vence p d && vence p l then do
      putStrLn("Urano perdeu algo muito precioso...")    
    else do
      putStrLn("Putz vei, o Leo ta demorando muito pra jogar...")
    main
  else do
    putStr ""
