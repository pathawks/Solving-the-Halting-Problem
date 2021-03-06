(set-info :smt-lib-version 2.6)
(set-logic LIA)
(set-option :produce-models true)

(declare-const seed Int)
(declare-const lhs Int)
(declare-const rhs Int)

(assert (> seed 0))
(assert (<= seed 65536))
(assert (= lhs (- (mod seed 65537) 1)))
(assert (= rhs (- (mod (* (+ lhs 1) 75) 65537) 1)))
(assert (= lhs rhs))

(check-sat)
