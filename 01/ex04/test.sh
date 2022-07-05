make

echo "./replace test/file r w:\n"
./replace test/file r w
echo "Original:\n"
cat test/file
echo "\nNew file:\n"
cat test/file.replace
