#include "MyTransform.h"
#include "Resource.h"

MyTransform::MyTransform() {
    matrix = new Matrix(1, 0, 0, 1, 0, 0);
}

//Copy constructor
MyTransform::MyTransform(const MyTransform& other) {
    matrix = other.matrix->Clone();
}

MyTransform& MyTransform::operator=(const MyTransform& other) {
    if (this != &other) {
        delete matrix;
        matrix = other.matrix->Clone();
    }
    return *this;
}

MyTransform::~MyTransform() {
    delete matrix;
    matrix = nullptr;
}

// Setter
void MyTransform::setTranslate(float tx, float ty) {
    Matrix m(1, 0, 0, 1, 0, 0);
    m.Translate(tx, ty);
    matrix->Multiply(&m, MatrixOrderAppend);
}

void MyTransform::setScale(float sx, float sy) {
    Matrix m(1, 0, 0, 1, 0, 0);
    m.Scale(sx, sy);
    matrix->Multiply(&m, MatrixOrderAppend);
}

void MyTransform::setUniformScale(float s) {
    setScale(s, s);
}

void MyTransform::setRotate(float degrees) {
    Matrix m(1, 0, 0, 1, 0, 0);
    m.Rotate(degrees);
    matrix->Multiply(&m, MatrixOrderAppend);
}

void MyTransform::combineWith(MyTransform* other) {
    if (!other) return;
    matrix->Multiply(other->matrix, MatrixOrderPrepend);
}

const Matrix& MyTransform::getMatrix() const {
    return *matrix;
}

void MyTransform::applyTo(Graphics& g) const {
    g.MultiplyTransform(matrix, MatrixOrderAppend);
}

MyTransform* MyTransform::clone() const {
    return new MyTransform(*this);
}
