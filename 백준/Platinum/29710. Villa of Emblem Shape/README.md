# [Platinum III] Villa of Emblem Shape - 29710 

[문제 링크](https://www.acmicpc.net/problem/29710) 

### 성능 요약

메모리: 2220 KB, 시간: 20 ms

### 분류

기하학, 볼록 껍질

### 제출 일자

2026년 1월 2일 14:54:03

### 문제 설명

<p>The princess has a vast private estate. She has decided to build a new villa there.</p>

<p>According to her creative request, the ground floor outline of the main house of the villa must be derived from the emblem of the royal family. The emblem is a simple polygon. Four examples are shown in Figure F-1. The outline does not have to be the exact shape of the emblem; it can be formed by sliding and overlaying multiple copies of the emblem, like in Figure F-2. Any finite number of copies can be used, but all the copies should have the same size and orientation without being reversed.</p>

<table class="table table-bordered td-center">
	<tbody>
		<tr>
			<td><img alt="" src="https://upload.acmicpc.net/9ceff845-50b1-41dc-a269-eb46e5afbeba/-/preview/" style="width: 100px; height: 100px;"></td>
			<td><img alt="" src="https://upload.acmicpc.net/73f21216-059b-4fcb-ab3e-becf3a39306f/-/preview/" style="width: 100px; height: 100px;"></td>
			<td><img alt="" src="https://upload.acmicpc.net/98fda7d1-b1db-4167-ace3-5a6d98c03757/-/preview/" style="width: 100px; height: 100px;"></td>
			<td><img alt="" src="https://upload.acmicpc.net/141be72f-104b-49c0-b15c-713beaa07c20/-/preview/" style="width: 100px; height: 100px;"></td>
		</tr>
		<tr>
			<td>Dataset 1</td>
			<td>Dataset 2</td>
			<td>Dataset 3</td>
			<td>Dataset 4</td>
		</tr>
	</tbody>
</table>

<p style="text-align: center;">Figure F-1: The emblems in Sample Input</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/cf86e36d-ee17-4506-a4d1-29c194b1b468/-/preview/" style="width: 480px; height: 200px;"></p>

<p style="text-align: center;">Figure F-2: An example of overlaying of copies for the first dataset of Sample Input</p>

<p>For security reasons, the outline must be a convex polygon. The rightmost of Figure F-2 is a convex polygon. Your task is to judge whether a convex polygon can be constructed by overlaying a finite number of copies of the emblem.</p>

### 입력 

 <p>The input consists of multiple datasets, each in the following format.</p>

<blockquote>
<p><i>n</i></p>

<p><i>x</i><sub>1</sub> <i>y</i><sub>1</sub></p>

<p> ⋮</p>

<p><i>x<sub>n</sub></i> <i>y<sub>n</sub></i></p>
</blockquote>

<p><i>n</i> is the number of the vertices of the emblem, an integer between 3 and 200, inclusive. (<i>x<sub>i</sub>, y<sub>i</sub></i>) gives the coordinates of the <i>i</i>-th vertex in the right-hand coordinate system (<i>i</i> = 1, <i>…, n</i>). Each of <i>x<sub>i</sub></i> and <i>y<sub>i</sub></i> is an integer between −10000 and 10000, inclusive. Any two vertices have different coordinates. The vertices are listed in a counterclockwise order. Any two edges of the emblem do not have a common point other than their connecting vertex. For each vertex, the angle of the two edges is not 180 degrees.</p>

<p>The end of the input is indicated by a line consisting of a zero. The input consists of at most 500 datasets.</p>

### 출력 

 <p>For each dataset, output in a line <code>Yes</code> if a convex polygon can be constructed, and <code>No</code>, otherwise.</p>

