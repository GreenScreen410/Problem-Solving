# [Platinum I] Polygons - 8408 

[문제 링크](https://www.acmicpc.net/problem/8408) 

### 성능 요약

메모리: 8076 KB, 시간: 40 ms

### 분류

정렬, 기하학, 다각형의 넓이, 각도 정렬

### 제출 일자

2026년 1월 19일 17:30:44

### 문제 설명

<p>Yesterday Little John had a test on geometry. The description of the most difficult problem follows. Given two triangles <em>A</em> and <em>B</em>, calculate the area of region <em>A</em> + <em>B</em>, which is defined as follows: <em>A</em> + <em>B</em> = {<em>p</em><sub>1</sub> + <em>p</em><sub>2</sub> : <em>p</em><sub>1</sub> ∈ <em>A</em>, <em>p</em><sub>2</sub> ∈ <em>B</em>}. For example, if <em>A</em> has the vertices (0, 0), (0, 2), (2, 0) and <em>B</em> has the vertices (0, 0), (0, 1), (3, 0), then <em>A</em> + <em>B</em> is a polygon with the vertices (0, 0), (0, 3), (3, 2) and (5, 0), so its area is 9.5.</p>

<p>Afterwards, John started to wonder how to solve a modified problem - "How to calculate area of <em>A</em> + <em>B</em>, if <em>A</em> and <em>B</em> are arbitrary convex polygons". Little John has a test on biology tomorrow and has no time to solve this problem himself. He asked you for help in solving this task.</p>

<p>Write a program, which:</p>

<ul>
	<li>reads the descriptions of two convex polygons <em>A</em> and <em>B</em>,</li>
	<li>computes the area of <em>A</em> + <em>B</em>,</li>
	<li>writes it doubled to the standard output.</li>
</ul>

### 입력 

 <p>The first line of the standard input contains two integers <em>n</em> and <em>m</em> (3 ≤ <em>n</em>, <em>m</em> ≤ 100 000) separated with a single space and denoting the numbers of vertices of polygons <em>A</em> and <em>B</em>. In the second line there are <em>n</em> pairs of integers (<em>x<sub>i</sub></em>, <em>y<sub>i</sub></em>) (-100 000 000 ≤ <em>x<sub>i</sub></em>, <em>y<sub>i</sub></em> ≤ 100 000 000), denoting the coordinates of consecutive vertices of the polygon <em>A</em> (in the clockwise order). In the third line there are <em>m</em> pairs of integers (<em>x<sub>i</sub></em>, <em>y<sub>i</sub></em>) (-100 000 000 ≤ <em>x<sub>i</sub></em>, <em>y<sub>i</sub></em> ≤ 100 000 000) denoting the coordinates of consecutive vertices of the polygon <em>B</em> (in the clockwise order).</p>

### 출력 

 <p>The first and only line should contain one integer - doubled area of <em>A</em> + <em>B</em>.</p>

