#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<string> strings;
  string op;

  while (true)
  {
    cout << "1) Agregar al final" << endl;
    cout << "2) Mostrar" << endl;
    cout << "3) Inicializar" << endl;
    cout << "4) Frente" << endl;
    cout << "5) Último" << endl;    
    cout << "6) Ordenar" << endl;        
    cout << "7) Insertar" << endl;       
    cout << "8) Eliminar" << endl;  
    cout << "9) Eliminar Último" << endl;        
    cout << "0) Salir " << endl;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n' );
    getline(cin, op);

    if (op == "1")
    {

      string myString;
      cout << "Cadena:";
      getline(cin, myString); 

      strings.push_back(myString);
    }

    else if (op == "2")
    {
      for (size_t i = 0; i < strings.size(); i++)
      {
        cout << strings[i] << ", ";
      }

      cout << endl;
    }

    else if (op == "3")
    {
      size_t n;
      string myString;

      cout << "Tam: ";
      cin >> n;
      cout << "Cadena: ";
      cin.ignore();
      getline(cin, myString); 

      strings = vector<string>(n, myString);
    }

    else if (op == "4")
    {
      if (strings.empty())
      {
        cout << "Vector está vacío" << endl;
      }
      else 
      {
        cout << strings.front() << endl;
      }
    }

    else if (op == "5")
    {
      if (strings.empty())
      {
        cout << "Vector está vacío" << endl;
      }
      else 
      {
        cout << strings.back() << endl;
      }
    }

    else if (op == "6")
    {
      sort(strings.begin(), strings.end());
    }

    else if (op == "7")
    {
      size_t p;
      string myString;

      cout << "Posición: ";
      cin >> p; 
      cout << "Cadena: ";
      cin.ignore();
      getline(cin, myString); 

      if (p >= strings.size()) 
      {
        cout << "Posición invalida" << endl;
      }
      else
      {
        strings.insert(strings.begin() + p , myString);
      }
    }    

    else if (op == "8")
    {
      size_t p;

      cout << "Posición: ";
      cin >> p; cin.ignore();

      if (p >= strings.size()) 
      {
        cout << "Posición invalida" << endl;
      }
      else
      {
        strings.erase(strings.begin() + p);
      }
    }     

    else if (op == "9")
    {
      if (strings.empty())
      {
        cout << "Vector está vacío" << endl;
      }
      else
      {
        strings.pop_back();
      }
    }

    else if (op == "0")
    {
      break;
    }
  }
}