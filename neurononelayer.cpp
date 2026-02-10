#include <iostream>
#include <string>
using namespace std;
#define MAX 100

//Basic class neuron (using array)
class Neuron { 
private:
    double weight[100][100];
    double numin[100][100];
    double output[100][100];
    double bias;
    int rows, cols, numneuron;
public:
    Neuron();
    void input();
    void layer();
    void computeRelu();
    void display();

};
//Use constructor with initial list
Neuron::Neuron() : bias(0.5) {}

// Input matrix
void Neuron::input()
{
    cout << "Matrix input vector" << endl;
    cin >> rows;
    cout << "Matrix input: features" << endl;
    cin >> cols;
    cout << "Enter the input matrix: " << endl;
    for (int i=0; i<rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> numin[i][j];
        }
    }
}
// Neuron layer matrix
void Neuron::layer()
{
    cout << "Matrix layer: neuron input: " << endl;
    cin >> numneuron;
    cout << "Enter the weight matrix: " << endl;
    for (int i = 0; i < cols; i++)
         {
         for (int j = 0; j < numneuron; j++)
                {
                    cin >> weight[i][j];
                }
         }
}

// ReLu function
void Neuron::computeRelu()
{
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < numneuron; j++) {
                double sum = 0;
                for (int k = 0; k < cols; k++) {
                    sum += numin[i][k] * weight[k][j];
                }
                sum += bias;
                output[i][j] = (sum > 0) ? sum : 0;
            }
        }
}

void Neuron::display()
{
    cout << "\n--- Output LAYER (ReLU) ---" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < numneuron; j++) {
                cout << output[i][j] << "  ";
            }
            cout << endl;
        }
}

int main() {
    Neuron myneuron;
    myneuron.input();
    myneuron.layer();
    myneuron.computeRelu();
    myneuron.display();
    return 0;
}
