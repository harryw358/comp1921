#!bin/bash

# Test for bad filename

echo -n "Testing bad filename: "
./maze < /input/input_3.txt > out
if grep -q "Error: Bad filename" out;
then
    echo "Pass:
else
    echo "Fail:
fi

# Test for successful file load

echo -n "Testing for successful file load: "
echo "1" | ./maze.txt > out
if grep -q "File maze.txt successfully loaded" out;
then
    echo "Pass"
else
    echo "Fail"
fi

# Test for bad user input (not WASD)

echo -n "Testing for bad user input (not WASD): "
echo "f" | ./maze.txt > out
if grep -q "Error: Invalid movement option" out;
then
    echo "Pass"
else
    echo "Fail"
fi

# Presence check on user input

echo -n "Testing for presence on user input: "
echo "" | ./maze.txt > out
if grep -q "Error: Invalid movement option" out;
then
    echo "Pass"
else
    echo "Fail"
fi

# Test for good user input (is WASD)

echo -n "Testing for good user input (is WASD): "
echo "a" | ./maze.txt > out
if grep -q "Error: Invalid movement option." out;
then
    echo "Fail"
else
    echo "Pass"
fi

# Test for invalid maze height

echo -n "Testing for invalid maze height: "
echo 245 | ./maze.txt > out
if grep -q "Error: Invalid maze height" out;
then
    echo "Pass"
else
    echo "Fail"
fi

# Test for invalid maze width

echo -n "Testing for invalid maze width (boundary)"
echo -35 | ./maze.txt > out
if grep -q "Error: Invalid maze width" out;
then
    echo "Pass"
else
    echo "Fail"

# Test for valid maze height (boundary)

echo -n "Testing for valid maze height (boundary)"
echo "5" | ./maze.txt > out
if grep -q "Error: Invalid maze height" out
then
    echo "Fail"
else
    echo "Pass"

# Test for valid maze width (normal)

echo -n "Testing for valid maze height (normal)"
echo "50" | ./maze.txt > out
if grep -q "Error: Invalid maze height" out
then
    echo "Fail"
else
    echo "Pass"
fi

