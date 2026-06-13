# Probability & Expectation

## 1. Probability Basics

### Definition
Probability measures how likely an event is to occur.
For equally likely outcomes:
$$P(E) = \frac{\text{Favorable Outcomes}}{\text{Total Outcomes}}$$

### Range
$$0 \le P(E) \le 1$$
* **$0$** $\to$ impossible event
* **$1$** $\to$ certain event

### Basic Examples
* **Example 1 — Tossing a Fair Coin**:
  $$\text{Probability of getting Head} = P(H) = \frac{1}{2}$$

---

## 2. Basic Rules & Identities

* **Union of two events**:
  $$P(A \cup B) = P(A) + P(B) - P(A \cap B)$$
* **Intersection (Independent events)**:
  $$P(A \cap B) = P(A) \times P(B)$$
* **Intersection (Dependent events)**:
  $$P(A \cap B) = P(A) \times P(B|A)$$
* **Union (Mutually Exclusive events)**:
  $$P(A \cup B) = P(A) + P(B)$$
* **Bayes' Theorem**:
  $$P(A | B) = \frac{P(B | A) P(A)}{P(B)}$$

---

## 3. Conditional Probability

Conditional probability is the probability of an event $A$ occurring given that another event $B$ has already occurred. It is denoted as $P(A|B)$ and calculated using the formula:
$$P(A|B) = \frac{P(A \cap B)}{P(B)}$$

* **Interpretation**: Probability that $A$ occurs given that $B$ has already occurred.
* **Example**:
  * $\text{Event}_1 \to \text{rain}$
  * $\text{Event}_2 \to \text{clouds}$

---

## 4. Expectation (Expected Value)

Expected value is the weighted average of all outcomes.

### Formula
For a random variable $X$:
$$E[X] = \sum x_i \cdot P(x_i)$$

where:
* $x_i = \text{value of outcome}$
* $P(x_i) = \text{probability of outcome } x_i$

### Expectation Examples
* **Example 1 — Coin Reward**:
  * Head $\to$ ₹100
  * Tail $\to$ ₹10
  * Expected value:
    $$E[X] = 100 \cdot P(H) + 10 \cdot P(T) = 100 \cdot 0.5 + 10 \cdot 0.5 = 55$$

---

## 5. Linearity of Expectation

### Core Property
$$E[X + Y] = E[X] + E[Y]$$

More generally, for any random variables $X_1, X_2 \dots X_n$ (even if dependent):
$$E\left[\sum_{i=1}^n X_i\right] = \sum_{i=1}^n E[X_i]$$

### Most Important Fact
* **Linearity works EVEN IF variables are dependent.**
* You do **not** need independence.

### Formulas
* For any constant $c$ and random variable $X$:
  $$E[c X] = c E[X]$$
* General linear transformation:
  $$E[aX + b] = aE[X] + b$$

### Examples
* **Example — Tossing 2 coins**:
  $$E(2 \cdot \text{coin toss}) = 2 \cdot E(\text{coin toss})$$
  * Let a coin toss have outcome $H \to 1$, $T \to 2$
  * A dice toss has outcomes $1, 2, 3, 4, 5, 6$.

### Indicator Variables
For CP problems:
Define the indicator variable $I$:
$$I = \begin{cases} 1 & \text{if event occurs} \\ 0 & \text{otherwise} \end{cases}$$
The expectation of an indicator variable is simply the probability of the event occurring:
$$E[I] = 1 \cdot P(I=1) + 0 \cdot P(I=0) = P(I=1)$$
