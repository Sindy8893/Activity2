#include <iostream>
using namespace std;

int main()
{
    int referencia_zapatos;
    char descripcion_zapatos[30];
    int talla;
    char disponible;
    int costo;
    int precio;
    int cantidad;
    int costo_total;
    int precio_total;
    int utilidad_unidad;
    int utilidad_total;
    float porcentaje;

    cout<<"ADMINISTRADOR VENTA DE ZAPATOS"<<endl;
    cout<<"Digite la referencia del zapato..."<<endl;
    cin>>referencia_zapatos;
    cin.ignore(256, '\n');
    cout<<"Digite una descripcion del zapato..."<<endl;
    cin.getline(descripcion_zapatos,30);
    cout<<"Digite la talla del zapato..."<<endl;
    cin>>talla;
    cout<<"Digite si esta disponible a la venta S/N..."<<endl;
    cin>>disponible;
    cout<<"Digite la cantidad de zapatos..."<<endl;
    cin>>cantidad;
    cout<<"Digite el costo del zapato..."<<endl;
    cin>>costo;
    cout<<"Digite el precio de venta del zapato..."<<endl;
    cin>>precio;

    system("cls");
    
    cout<<"LOS DATOS REGISTRADOS SON LOS SIGUIENTES"<<endl;
    cout<<"REFERENCIA:"<<referencia_zapatos<<endl;
    cout<<"DESCRIPCION:"<<descripcion_zapatos<<endl;
    cout<<"TALLA:"<<talla<<endl;
    cout<<"DISPONIBILIDAD:"<<disponible<<endl;
    cout<<"CANTIDAD DE ZAPATOS:"<<cantidad<<endl;
    cout<<"COSTO UNIDAD:"<<costo<<endl;
    costo_total= costo*cantidad;
    cout<<"COSTO TOTAL:"<<costo_total<<endl;
    cout<<"PRECIO UNIDAD:"<<precio<<endl;
    precio_total=precio*cantidad;
    cout<<"PRECIO TOTAL:"<<precio_total<<endl;
    utilidad_unidad=precio-costo;
    cout<<"UTILIDAD POR UNIDAD:"<<utilidad_unidad<<endl;
    utilidad_total=precio_total-costo_total;
    cout<<"UTILIDAD TOTAL:"<<utilidad_total<<endl;
    porcentaje=(((precio_total-costo_total)/costo_total)*100);
    cout<<"PORCENTAJE DE UTILIDAD:"<<porcentaje<<endl;
    cout<<"SINDY DAYANA CORTES TOSCANO"<<endl<<endl;

    system("pause");
    return EXIT_SUCCESS;
}