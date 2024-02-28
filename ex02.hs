import Prelude hiding (pi)

pi :: Double
pi = (32*sum [1 /(x^3) | x <- [1..n]])^(1/3)
  where n = 1000

main :: IO ()
main = putStrLn $ show pi
