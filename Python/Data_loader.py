from datasets import load_dataset

dataset = load_dataset("bodo.csv",data_dir="D:/DataSets",drop_labels=True)
dataset.push_to_hub("Airoleo/Bodo")