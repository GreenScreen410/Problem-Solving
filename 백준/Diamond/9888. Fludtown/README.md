# [Diamond V] Fludtown - 9888 

[문제 링크](https://acmicpc.net/problem/9888) 

### 성능 요약

메모리: 2136 KB, 시간: 1 ms

### 분류

기하학, 반평면 교집합

### 제출 일자

2026년 11월 25일 03:09:11

### 문제 설명

<p>Fludtown is a small 1 km × 1 km square-shaped township in Rainee county. The houses in Fludtown are scattered randomly around the township but property ownership follows a simple rule: the land at any point in Fludtown belongs to the house whose straight-line distance to the point is shortest. Of course a house cannot be located at the same spot where another house is.</p>

<p>Last week, the Fenster family moved into one of Fludtown’s houses. Mr. Fenster had the property agent put down markers to mark the edges of his property so that he could build a fence around the house. Unfortunately, a big rain storm hit Fludtown yesterday and the markers have all been wiped away. Fortunately, he does have the town map, indicating where the Fenster house and the other properties are.</p>

<p>Fenster is going to buy fencing material from the Fence Depot outside town. Help Mr Fenster figure out how many fenceposts he needs to buy (fenceposts are only needed at the points where the fence changes direction). If the Fenster house property extends to the border of Fludtown, make sure to include the necessary posts for the border as well. Note that some houses may not influence the number of fenceposts required.</p>

### 입력 

 <p>The location of a Fludtown house is specified with (x, y) coordinates. The origin (0, 0) of the coordinate system is located at the south-west corner of Fludtown. The x axis runs from west to east, the y axis runs from south to north, and 1 coordinate unit corresponds to 1 meter.</p>

<p>Let n (1 ≤ n ≤ 10) be the number of houses in Fludtown. The input file contains n + 1 lines. The first line contains the integer n. Each of the next n lines contains two integers x, y separated by spaces, giving the (x, y) coordinates of the location of a house. The location of Fenster family house is given before the rest of the houses, i.e., in the second input line. All houses in the 1 km<sup>2</sup> Fludtown are located in or on the edges of the square township, i.e., 0 ≤ x ≤ 1000, 0 ≤ y ≤ 1000.</p>

### 출력 

 <p>The output file contains an integer giving the number of fenceposts required to build the fence for Fenster’s house.</p>

