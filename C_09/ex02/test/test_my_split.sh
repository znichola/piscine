./run_tests.sh > your_results
diff what_i_think_is_correct your_results
echo "tests done, if the diff shows nothing, then your function matches what mine does"