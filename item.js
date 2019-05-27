function create(image, parent) {
    return Qt.createQmlObject('import QtQuick 2.0; Image { fillMode: Image.PreserveAspectFit; source: "' + image + '" }', parent, "image");
}
