dir=$(pwd)
srcDir=$dir/src
fileNameWithoutExt=main
fileNameOutput=$fileNameWithoutExt.exe
fileName=$fileNameWithoutExt.c

gcc $srcDir/$fileName -o $dir/$fileNameOutput
echo "--------------------------------"
echo "Running ${fileNameWithoutExt}"
echo "------------------------------"
echo ""
.\/$fileNameOutput
echo ""
echo ""
echo "------------------------------"
echo "Finished ${fileNameWithoutExt}"
echo "--------------------------------"
rm $fileNameOutput
