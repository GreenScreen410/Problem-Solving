# [Platinum IV] Pub crawl - 13862 

[문제 링크](https://www.acmicpc.net/problem/13862) 

### 성능 요약

메모리: 2084 KB, 시간: 24 ms

### 분류

기하학, 해 구성하기, 볼록 껍질

### 제출 일자

2025년 12월 17일 23:58:10

### 문제 설명

<p>Al just arrived in Dublin. He is going to spend his cash on the famous Dublin activity - the pub crawl. The goal is to drink a pint of Guinness in as many different pubs in the city as possible, not visiting any pub twice. There are n pubs in Dublin. Al gets drunk very fast, so he sees pubs as points on a plane, and his path from a pub to the next one as a straight line connecting these points, though the actual path may involve going along different streets, around buildings or even walking in circles trying to find the next pub. Al doesn’t care about those details. The only thing he cares about is that every turn he makes is a left turn, he enjoys going left. This means for every three consecutive pubs in his route the third one must lie in the left half plane with respect to the directed line from the first pub to the second. It is known that builders in Dublin also enjoy pub crawl, so they never managed to build at least three pubs on a straight line. Help Al to find out how many pubs he can visit and plan the route for him.</p>

### 입력 

 <p>The first line contains an integer n (1 ≤ n ≤ 5000) – the number of pubs.</p>

<p>Each of the next n lines contains two integers x and y (−10<sup>9</sup> ≤ x, y ≤ 10<sup>9</sup> ) – pub coordinates. Different pubs are located in different points.</p>

### 출력 

 <p>The first line should contain an integer m – the maximum number of pubs Al can visit.</p>

<p>The next line should contain m indices of pubs in the order Al should visit them. Pubs are numbered from 1 to n in the same order as they appear in the input.</p>

