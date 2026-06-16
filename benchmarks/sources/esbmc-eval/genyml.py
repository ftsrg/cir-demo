#
# Source: https://doi.org/10.5281/zenodo.14824495
#
# This work is licensed under Creative Commons Attribution 4.0 International.
# To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/

import os
import yaml

def create_yml_file(folder_path, cpp_name, expected_verdict):
    yml_content = {
        "format_version": "2.0",
        "input_files": cpp_name,
        "properties": [
            {
                "property_file": "../../unreach-call.prp",
                "expected_verdict": expected_verdict
            }
        ],
        "options": {
            "language": "CPP",
            "data_model": "ILP32"
        }
    }

    folder_name = os.path.basename(folder_path)
    yml_path = os.path.join(folder_path, f"{folder_name}.yml")
    with open(yml_path, "w") as yml_file:
        yaml.dump(yml_content, yml_file, default_flow_style=False)

    print(f"YML file created: {yml_path}")

def process_folders():
    base_folder = os.getcwd()  # Use current working directory
    for folder_name in os.listdir(base_folder):
        folder_path = os.path.join(base_folder, folder_name)

        if os.path.isdir(folder_path):
            cpp_path = os.path.join(folder_path, "main.cpp")
            test_desc_path = os.path.join(folder_path, "test.desc")

            if os.path.exists(cpp_path) and os.path.exists(test_desc_path):
                # Read expected_verdict from test.desc
                with open(test_desc_path, "r") as test_file:
                    lines = test_file.readlines()
                    last_line = lines[-1].strip()

                    if last_line == "^VERIFICATION SUCCESSFUL$":
                        expected_verdict = True
                    elif last_line == "^VERIFICATION FAILED$":
                        expected_verdict = False
                    else:
                        expected_verdict = False

                # Create yml file in the corresponding folder
                create_yml_file(folder_path, "main.cpp", expected_verdict)

if __name__ == "__main__":
    process_folders()

