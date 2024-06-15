async function query(data) {
    const response = await fetch(
        "https://api-inference.huggingface.co/models/meta-llama/Meta-Llama-3-8B",
        {
            headers: { Authorization: "Bearer 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" },
            method: "POST",
            body: JSON.stringify(data),
        }
    );
    const result = await response.json();
    return result;
}

query({"inputs": "Can you please let us know more details about your "}).then((response) => {
    console.log(JSON.stringify(response));
});