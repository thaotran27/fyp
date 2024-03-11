from flask import Flask, render_template, request, jsonify

app = Flask(__name__)

gesture = ""
@app.route('/')
def index():
    return render_template('index.html', gesture=gesture)

@app.route('/prediction', methods=['GET', 'POST'])
def receive_prediction():
    if request.method == 'POST':
        global gesture
        prediction_data = request.json
        print("Received prediction data:", prediction_data)
        if prediction_data["gesture"] != " ":
            gesture += prediction_data["gesture"]
        else:
            gesture = ""
        return gesture


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)
