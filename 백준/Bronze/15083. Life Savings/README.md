# [Bronze III] Life Savings - 15083 

[문제 링크](https://www.acmicpc.net/problem/15083) 

### 성능 요약

메모리: 32412 KB, 시간: 36 ms

### 분류

수학, 구현, 사칙연산

### 제출 일자

2026년 3월 24일 00:53:50

### 문제 설명

<p>Stanley is very prudent when it comes to his finances. He enjoys a somewhat spartan lifestyle and watches every penny he spends. Those few who call him friend view him as economical, abstemious, and parsimonious. He’s basically a miserly tightwad.</p>

<p>Stan will never go shopping unless he has coupons. At the moment he has a bit of a conundrum. There are three items he wants to buy which have list costs of <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>100</mn><mo>,</mo></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$100, $</span></mjx-container>50 and $40. He has one coupon for 20% off his entire purchase which can’t be used with any other coupon, and two coupons — one for 30% off any one item and one for 25% off any one item — which can be used together. He’s not sure if using the first coupon by itself will save him more money than using the other two coupons together or vice versa, and the people standing in line behind him at the checkout counter are getting a little impatient. Can you help Stan with his problem and make cents out of this situation?</p>

### 입력 

 <p>Input consists of two lines. The first line starts with three positive integers p<sub>1</sub> p<sub>2</sub> p<sub>3</sub> (p<sub>1</sub>, p<sub>2</sub>, p<sub>3</sub> ≤ 1000) which are the prices of three objects to be purchased. The second line contains three positive integers c<sub>1</sub> c<sub>2</sub> c<sub>3</sub> (c<sub>1</sub>, c<sub>2</sub>, c<sub>3</sub> ≤ 100) where c1 is the coupon percentage for the entire purchase (and cannot be used with any other coupon) and c2 and c3 are two one-item coupons (which can be used together but on separate items).</p>

### 출력 

 <p>If using the single entire-purchase coupon saves Stan more money, display the word one followed by the amount of savings; otherwise display the word two following by the best savings using the two one-item coupons. All savings should be output with two digits after the decimal point.</p>

