readInts = do
  line <- getLine
  let w = words line
  let n = map (read::String->Int) w
  return n

add2 d = do
  putStrLn "Parece o trabalho do meu filho!"
  if (d + 2) <= 24 then
    putStrLn "TCC Apresentado!"
  else
    putStrLn "Fail! Entao eh nataaaaal!"    

main = do
  input <- readInts
  let e = input!!0
  let d = input!!1

  if e > d then
    putStrLn "Eu odeio a professora!"
  else if d - e >= 3 then
      putStrLn "Muito bem! Apresenta antes do Natal!"
  else
    add2 d
