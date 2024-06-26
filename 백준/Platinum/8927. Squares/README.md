# [Platinum II] Squares - 8927 

[문제 링크](https://www.acmicpc.net/problem/8927) 

### 성능 요약

메모리: 16932 KB, 시간: 692 ms

### 분류

볼록 껍질, 기하학, 회전하는 캘리퍼스

### 제출 일자

2024년 6월 26일 14:42:02

### 문제 설명

<p>The famous Korean IT company nhn plans to make a digital map of the Earth with help of wireless sensors which spread out in rough terrains. Each sensor sends a geographical data to nhn. But, due to the inaccuracy of the sensing devices equipped in the sensors, nhn only knows a square region in which each geographical data happens. Thus a geographical data can be any point in a square region. You are asked to solve some geometric problem, known as diameter problem, on these undetermined points in the squares.</p>

<p>A diameter for a set of points in the plane is defined as the maximum (Euclidean) distance among pairs of the points in the set. The diameter is used as a measurement to estimate the geographical size of the set. nhn wants you to compute the largest diameter of the points chosen from the squares. In other words, given a set of squares in the plane, you have to choose exactly one point from each square so that the diameter for the chosen points is maximized. The sides of the squares are parallel to X-axis or Y-axis, and the squares may have different sizes, intersect each other, and share the same corners.</p>

<p>For example, if there are six squares as in the figure below, then the largest diameter is defined as the distance between two corner points of squares S<sub>1</sub> and S<sub>4</sub> .</p>

<p><img alt="" src="https://onlinejudgeimages.s3.amazonaws.com/problem/8927/%EC%8A%A4%ED%81%AC%EB%A6%B0%EC%83%B7%202016-11-18%20%EC%98%A4%ED%9B%84%202.39.30.png" style="height:225px; width:235px"></p>

<p>Given a set of n squares in the plane, write a program to compute the largest diameter D of the points when a point is chosen from each square, and to output D<sup>2</sup>, i.e., the squared value of D .</p>

### 입력 

 <p>Your program is to read from standard input. The input consists of T test cases. The number of test cases T is given in the first line of the input. The first line of each test case contains an integer, n , the number of squares, where 2 ≤ n ≤ 100,000 . Each line of the next n lines contains three integers, x , y , and w , where (x, y) is the coordinate of the left-lower corner of a square and w is the length of a side of the square; 0 ≤ x, y ≤ 10,000 and 1 ≤ w ≤ 10,000 .</p>

### 출력 

 <p>Your program is to write to standard output. Print exactly one line for each test case. The line should contain the integral value D<sup>2</sup> , where D is the largest diameter of the points when a point is chosen from each square.</p>

<p>The following shows sample input and output for two test cases.</p>

