# [Gold III] 호현이와 파이썬 - 34830 

[문제 링크](https://www.acmicpc.net/problem/34830) 

### 성능 요약

메모리: 34536 KB, 시간: 40 ms

### 분류

그래프 이론, 오일러 경로

### 제출 일자

2025년 11월 30일 19:21:45

### 문제 설명

<p>호현이는 매우 오랫동안 C++로 알고리즘 문제해결을 즐겨왔다. 하지만 그런 호현이에게 한 가지 문제가 생겼는데 바로 이번에 호현이가 듣는 알고리즘 강의가 Python으로 진행된다는 것이다! 그래서 호현이는 Python을 공부해 보기로 했고, 조만간 Python의 매력에 흠뻑 빠져버렸다.</p>

<p>호현이가 Python의 매력을 느낀 부분 중 하나는 Python에서 세 변수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D44F TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi><mo>,</mo><mi>b</mi><mo>,</mo><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a, b, c$</span></mjx-container>의 값이 모두 같은지를 확인하려면 어떻게 해야 할까에 대해서이다.</p>

<p>C++에서는 <code>a == b && b == c</code>라고 비교해야 하지만 Python이라면 굳이 <code>&&</code>를 쓸 필요 없이 <code>a == b == c</code> 라고만 써도 비교할 수 있다. 정확히는, <code>a == b == c</code>라는 표현식은 <code>a == b and b == c</code>로 해석된다. 이는 변수가 네 개 이상일 때도 마찬가지이다. 즉, <code>x<sub>1</sub> == x<sub>2</sub> == ... == x<sub>n</sub></code> 라는 표현식은 <code>x<sub>1</sub> == x<sub>2</sub> and x<sub>2</sub> == x<sub>3</sub> and ... and x<sub>n-1</sub> == x<sub>n</sub></code>으로 해석된다.</p>

<p>호현이는 이런 문법이 <code>==</code> 말고 다른 연산자에서도 적용되는지가 궁금해졌고, 그것이 사실임을 알아냈다.</p>

<p>이번에는 <code>!=</code> 연산자를 이용해 세 변수의 값이 모두 다른지를 확인해 보고 싶다.</p>

<p>호현이는 <code>a != b != c</code>라고 코드를 작성했지만 <code>a != b and b != c</code>로 해석되어 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container>와 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D450 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>c</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$c$</span></mjx-container>의 값이 같을 때를 제대로 판정하지 못하며, <code>a != b != c != a</code> 라고 써야만 의도대로 동작한다는 것을 알게 되었다.</p>

<p>호현이는 이제 변수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개가 주어졌을 때 한 번에 모든 변수의 값이 각각 다른지를 확인해 보고 싶다. <code>x<sub>1</sub> != x<sub>2</sub> != ... != x<sub>n</sub></code>꼴의 표현식을 사용해서 판정하되, 코드를 길게 짜는 것은 싫기 때문에 사용하는 <code>!=</code> 의 개수를 최소로 하고 싶다. 단, 같은 변수명을 여러 번 사용할 수 있다.</p>

<p>변수의 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어졌을 때, <code>!=</code>만 사용해서 변수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 값이 모두 다름을 판정하기 위해 필요한 <code>!=</code>의 최소 개수를 구해주자.</p>

### 입력 

 <p>첫째 줄에 전부 다름을 확인해야 할 변수의 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c32"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c32"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>200</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$2 \leq N \leq 200\, 000$</span></mjx-container>)</p>

### 출력 

 <p>첫째 줄에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 변수가 전부 다른지를 <code>!=</code>만으로 확인하려 할 때 필요한 최소 <code>!=</code>의 개수를 출력한다.</p>

