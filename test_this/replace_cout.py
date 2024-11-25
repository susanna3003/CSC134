import re

# Read the file
with open("formula_one_cyo.cpp", "r") as file:
    code = file.read()

# Replace `cout` with `print_with_delay`
updated_code = re.sub(
    r'cout\s*<<\s*(".*?");?',
    r'print_with_delay(\1);',
    code
)

# Save the updated file
with open("formula_one_cyo_updated.cpp", "w") as file:
    file.write(updated_code)

print("File updated and saved as 'formula_one_cyo_updated.cpp'")