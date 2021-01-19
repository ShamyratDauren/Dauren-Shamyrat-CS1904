// Dauren Shamyrat CS1904
// easy

//#1
//func AreaRectangle(a: Int, b: Int) -> Int {
//	if a * b > 0{
//		return a * b
//	}
//	else{
//		return -1
//	}
//}
//print(AreaRectangle(a: 5, b: 7))  //test

//#2
//func power(voltage: Int, current: Int) -> Int {
//	return voltage * current
//}
//
//print(power(voltage: 2, current: 3))  // test

//#3
//func convTosec(min: Int) -> Int {
//	return min * 60
//}
//
//print(convTosec(min: 15))  //test


//medium

//#1
//func arrayOfMultiples(num: Int, length: Int)->[Int]{
//	var a = [Int]()
//	for i in num...(num*length) where i % num == 0{
//		a.append(i)
//	}
//	return a
//}
//
//print(arrayOfMultiples(num: 17, length: 6))   //test

//#2
//func higLow(a: String) -> (String,String){
//	let b = a.split(separator: " ")
//	let c = b.map { Int($0)!}
//	let c1 = c.max()!
//	let c2 = c.min()!
//	let high = String(c1)
//	let low = String(c2)
//	return (high, low)
//}
//
//print(higLow(a: "7 2 3 4 5"))  //test

//#3
//func letterCounter(a: Array<Array<String>> , b: String) -> Int {
//	var count = 0
//	for i in a{
//		for f in i{
//			if f == b{
//				count += 1
//			}
//		}
//	}
//	return count
//}
//
//print(letterCounter(a: ([
//	["A", "B", "C", "D"],
//	["B", "C", "D", "C"],
//	["B", "C", "D", "C"],
//	["B", "C", "D", "C"],
//	["B", "D", "D", "C"]
//	])
//, b: "B"))  //test