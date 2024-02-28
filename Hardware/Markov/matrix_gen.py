import numpy as np
import matplotlib.pyplot as plt
import csv

def process_text(text):
    characters = 'abcdefghijklmnopqrstuvwxyz '  # Include space in the characters
    char_indices = {char: i for i, char in enumerate(characters)}

    transition_matrix = np.zeros((len(characters), len(characters)))
    total_transitions = np.zeros(len(characters))

    for i in range(len(text) - 1):
        current_char = text[i].lower()
        next_char = text[i + 1].lower()

        if current_char in characters and next_char in characters:
            transition_matrix[char_indices[current_char], char_indices[next_char]] += 1
            total_transitions[char_indices[current_char]] += 1

    # Convert counts to probabilities
    for i in range(len(characters)):
        if total_transitions[i] > 0:
            transition_matrix[i, :] /= total_transitions[i]

    return transition_matrix, characters

def print_matrix(matrix, characters):
    print("Markov Chain Probability Matrix:")
    for i, char in enumerate(characters):
        print(f"{char}  " + " ".join(f"{prob:.4f}" for prob in matrix[i]))

def visualize_matrix(matrix, characters):
    plt.imshow(matrix, cmap='viridis', origin='lower', interpolation='none')
    plt.colorbar(label='Probability')
    plt.xticks(np.arange(len(characters)), characters)
    plt.yticks(np.arange(len(characters)), characters)
    plt.xlabel('Next Character')
    plt.ylabel('Current Character')
    plt.title('Markov Chain Probability Matrix')
    plt.show()

def write_matrix_to_csv(matrix, filename):
    with open(filename, 'w', newline='') as csvfile:
        csvwriter = csv.writer(csvfile)
        csvwriter.writerows(matrix)

def export_matrix_to_h(matrix, filename):
    with open(filename, 'w') as f:
        f.write("float transition_matrix[27][27] = {\n")
        for row in matrix:
            f.write("    {")
            for i, value in enumerate(row):
                f.write("{:.6f}".format(value))
                if i < len(row) - 1:
                    f.write(", ")
            f.write("},\n")
        f.write("};\n")

def main():
    file_name = "Markov/text.txt"  # Change this to the path of your text file
    with open(file_name, 'r') as file:
        text = file.read()

    matrix, characters = process_text(text)
    print_matrix(matrix, characters)
    visualize_matrix(matrix, characters)

    export_matrix_to_h(matrix, "Markov/markov.h")

if __name__ == "__main__":
    main()