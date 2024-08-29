# [Platinum IV] Cookies - 6934 

[문제 링크](https://www.acmicpc.net/problem/6934) 

### 성능 요약

메모리: 2040 KB, 시간: 0 ms

### 분류

기하학, 최소 외접원, 삼분 탐색

### 제출 일자

2024년 8월 29일 18:24:43

### 문제 설명

<p>Making chocolate chip cookies involves mixing flour, salt, oil, baking soda and chocolate chips to form dough which is rolled into a plane. Circles are cut from the plane, placed on a cookie sheet, and baked in an oven for about twenty minutes. When the cookies are done, they are removed from the oven and allowed to cool before being eaten.</p>

<p>We are concerned here with the process of cutting a single round cookie that contains all the chocolate chips. Once the dough has been rolled, each chip is visible in the planar dough, so we need simply to find a cookie cutter big enough to circle all the chips. What is the diameter of the smallest possible round cookie containing all the chips?</p>

### 입력 

 <p>Input consists of a positive integer <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> not greater than <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>10</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$10$</span></mjx-container>, followed by <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D45B TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$n$</span></mjx-container> lines of input. Each line gives the coordinates of one chocolate chip on the plane. Each coordinate is an integer in the range <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mo class="mjx-n"><mjx-c class="mjx-c5B"></mjx-c></mjx-mo><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="2"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c5D"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mo stretchy="false">[</mo><mn>0</mn><mo>,</mo><mn>1000</mn><mo stretchy="false">]</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$[0, 1000]$</span></mjx-container>.</p>

### 출력 

 <p>Output consists of a single real number, the diameter of the cookie rounded to two decimal places.</p>

