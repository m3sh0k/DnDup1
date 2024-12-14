#ifndef SPELL_H
#define SPELL_H

#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QMessageBox>

// Класс для представления заклинания
class Spell {
public:
    // Конструктор для создания нового заклинания
    Spell(const QString &name, const QString &description)
        : name(name), description(description) {}

    // Метод для сохранения заклинания в JSON файл
    bool saveToFile(const QString &filePath) {
        // Создаем JSON объект для заклинания
        QJsonObject spellObject;
        spellObject["name"] = name;              // Сохраняем имя заклинания
        spellObject["description"] = description; // Сохраняем описание заклинания

        // Конвертируем JSON объект в текст
        QJsonDocument doc(spellObject);

        // Открываем файл для записи
        QFile file(filePath);
        if (!file.open(QIODevice::WriteOnly)) {
            // Показать сообщение об ошибке, если файл нельзя открыть
            QMessageBox::warning(nullptr, "Ошибка", "Не удалось создать JSON файл: " + filePath);
            return false;
        }

        // Записываем JSON данные в файл
        file.write(doc.toJson());
        file.close();
        return true; // Успешно сохранили файл
    }

private:
    QString name;         // Имя заклинания
    QString description;  // Описание заклинания
};

#endif // SPELL_H
