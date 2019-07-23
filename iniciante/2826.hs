main = do
  a <- getLine
  b <- getLine
  
  if a < b then do
    putStrLn(a)
    putStrLn(b)
  else do
    putStrLn(b)
    putStrLn(a)
