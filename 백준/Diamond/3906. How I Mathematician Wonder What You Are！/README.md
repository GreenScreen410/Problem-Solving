# [Diamond III] How I Mathematician Wonder What You Are! - 3906 

[문제 링크](https://www.acmicpc.net/problem/3906) 

### 성능 요약

메모리: 2108 KB, 시간: 0 ms

### 분류

기하학, 반평면 교집합

### 제출 일자

2026년 2월 12일 17:20:45

### 문제 설명

<p>After counting so many stars in the sky in his childhood, Isaac, now an astronomer and a mathematician, uses a big astronomical telescope and lets his image processing program count stars. The hardest part of the program is to judge if a shining object in the sky is really a star. As a mathematician, the only way he knows is to apply a mathematical definition of stars.</p>

<p>The mathematical definition of a star shape is as follows: A planar shape F is star-shaped if and only if there is a point C ∈ F such that, for any point P ∈ F, the line segment CP is contained in F. Such a point C is called a center of F. To get accustomed to the definition, let's see some examples below.</p>

<p style="text-align:center"><img alt="" src="https://www.acmicpc.net/upload/imagesa/p3617.png" style="height:324px; width:592px"></p>

<p style="text-align:center">Figure 2: Star shapes (the first one) and non-star shapes (the second row)</p>

<p>The first two are what you would normally call stars. According to the above definition, however, all shapes in the first row are star-shaped. The two in the second row are not. For each star shape, a center is indicated with a dot. Note that a star shape in general has infinitely many centers. For example, for the third quadrangular shape, all points in it are centers.</p>

<p>Your job is to write a program that tells whether a given polygonal shape is star-shaped or not.</p>

### 입력 

 <p>The input is a sequence of datasets followed by a line containing a single zero. Each dataset specifies a polygon, and is formatted as follows.</p>

<pre>n
x<sub>1</sub> y<sub>1</sub>
x<sub>2</sub> y<sub>2</sub>
...
x<sub>n</sub> y<sub>n</sub></pre>

<p>The first line is the number of vertices, n, which satisfies 4 ≤ n ≤ 50. Subsequent n lines are the x- and y-coordinates of the n vertices. They are integers and satisfy 0 ≤ x<sub>i</sub> ≤ 10000 and 0 ≤ y<sub>i</sub> ≤ 10000 ( i = 1,..., n). Line segments (x<sub>i</sub>, y<sub>i</sub>)-(x<sub>i+1</sub>, y<sub>i+1</sub>) ( i = 1,..., n - 1) and the line segment (x<sub>n</sub>, y<sub>n</sub>)-(x<sub>1</sub>, y<sub>1</sub>) form the border of the polygon in the counterclockwise order. That is, these line segments see the inside of the polygon in the left of their directions.</p>

<p>You may assume that the polygon is simple, that is, its border never crosses or touches itself. You may also assume that no three edges of the polygon meet at a single point even when they are infinitely extended.</p>

### 출력 

 <p>For each dataset, output "1" if the polygon is star-shaped and "0" otherwise. Each number must be in a separate line and the line should not contain any other characters.</p>

