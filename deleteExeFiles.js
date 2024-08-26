const fs = require('fs');
const path = require('path');

// Correctly declare the folder path
const folderPath = 'C:/SOFTWARE ENGINEERING/C programing';

fs.readdir(folderPath, (err, files) => {
    if (err) {
        console.error('Error reading the folder:', err);
        return;
    }

    files.forEach(file => {
        if (path.extname(file) === '.exe') {
            const filePath = path.join(folderPath, file);
            fs.unlink(filePath, err => {
                if (err) {
                    console.error('Error deleting file:', err);
                } else {
                    console.log(`${file} deleted successfully.`);
                }
            });
        }
    });
});
