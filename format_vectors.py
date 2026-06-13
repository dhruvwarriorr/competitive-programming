import os
import re

root_dir = '/Users/dhruvkumar/competitive-programming'

for root, dirs, files in os.walk(root_dir):
    if '.git' in root.split(os.sep):
        continue
    for file in files:
        if file.endswith('.cpp'):
            file_path = os.path.join(root, file)
            # Don't update the script itself
            if file == 'format_vectors.py':
                continue
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
            
            # Replace vector< with vector < (with space)
            new_content = re.sub(r'\bvector<', 'vector <', content)
            
            if new_content != content:
                with open(file_path, 'w', encoding='utf-8') as f:
                    f.write(new_content)
                print(f"Updated: {os.path.relpath(file_path, root_dir)}")
